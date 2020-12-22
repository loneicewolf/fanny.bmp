##
# This module requires Metasploit: https://metasploit.com/download
# Current source: https://github.com/loneicewolf/metasploit_fanny_check_module
##

require 'msf/core'
require 'msf/core/post/common'
require 'msf/core/post/windows/priv'
class MetasploitModule < Msf::Post
  include Msf::Post::Common
  include Msf::Post::Windows::Registry

  def initialize(info = {})
    super(update_info(info,
                      'Name' => 'FannyBMP Registry Check',
                      'Description' => 'This module searches for the Fanny.bmp worm related registry keys',
                      'License' => MSF_LICENSE,
                      'Author' => ['William M.'],
                      'Platform' => ['win'],
                      'SessionTypes' => ['meterpreter'],
                      'References' => [['URL', 'https://securelist.com/a-fanny-equation-i-am-your-father-stuxnet/68787']]))
  end

  def run
    # https://securelist.com/a-fanny-equation-i-am-your-father-stuxnet/68787
    query = 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\"ECELP4",'
    query += 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\Driver,'
    query += 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter2,'
    query += 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter3,'
    query += 'HKEY_LOCAL_MACHINE\SYSTEM\CurrentControlSet\Control\MediaResources\acm\ECELP4\filter8'

    match = 0

    print_status("Searching registry on #{sysinfo['Computer']} for Fanny.bmp artifacts.")
    keys = query.split(/,/)
    begin
            keys.each do |key|
              (key, value) = parse_query(key)
              has_key = registry_enumkeys(key)
              has_val = registry_enumvals(key)

              if has_key.include?(value) || has_val.include?(value)
                print_good("#{sysinfo['Computer']}: #{key}\\#{value} found in registry.")
                match += 1
              end
            end
    rescue StandardError; end
    print_status("#{sysinfo['Computer']}: #{match} result(s) found in registry.")
  end

  def parse_query(key)
    path = key.split('\\')
    value = path[-1]
    path.pop
    key = path.join('\\')
    [key, value]
  end
end

