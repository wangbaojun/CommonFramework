Pod::Spec.new do |s|
  s.name         = "CommonFramework"
  s.version      = "0.1.1"
  s.summary          = "LeDe CaiPiao Account."
  s.source       = { :git => "https://github.com/wangbaojun/CommonFramework.git", :tag =>  s.version.to_s}
  s.platform     = :ios, '6.0'
  s.requires_arc = false
  s.homepage     = "https://github.com/wangbaojun/CommonFramework"
  # s.screenshots  = "www.example.com/screenshots_1.gif"
  s.license      = "MIT"				#开源协议
  s.author             = { "linyi31" => "linyi@jd.com" }
  s.source_files = 'libCommonFramework/include/PublicHeaders/*.{h,m}'
  s.resource     = 'libCommonFramework/LDCPCommonFramework.Bundle.bundle'
  s.vendored_libraries  = 'libCommonFramework/llibLDCPCommonFramework.a'
end