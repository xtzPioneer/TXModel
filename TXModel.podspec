Pod::Spec.new do |s|
  s.name         = 'TXModel'
  s.version      = '1.0'
  s.summary      = ''
  s.description  = <<-DESC
			轻量级的数据转模型工具,比你想象中的更简单、更便捷、更安全.
                   DESC
  s.homepage     = 'https://github.com/xtzPioneer/TXModel.git'
  s.license      = 'MIT'
  s.author       = { 'zhangxiong' => 'xtz_pioneer@163.com' }
  s.platform     = :ios, '8.0'
  s.source       = { :git => 'https://github.com/xtzPioneer/TXModel.git', :tag => s.version.to_s }
  s.source_files = 'TXModel/**/*.{h,m}'
  s.requires_arc = true  
end