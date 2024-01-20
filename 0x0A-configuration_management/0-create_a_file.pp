# creates a file in /tmp with specific reqs
file { '/tmp/school':
  content => 'I love Puppet',
  ensure  => file,
  mode    => '0744',
  owner   => 'www-data',
  group   => 'www-data',
}
