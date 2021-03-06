
Pod::Spec.new do |s|
  s.name         = "RNReactNativeHumanApi"
  s.version      = "1.0.0"
  s.summary      = "RNReactNativeHumanApi"
  s.description  = <<-DESC
                  RNReactNativeHumanApi
                   DESC
  s.homepage     = "https://github.com/author/RNReactNativeHumanApi.git"
  s.license      = "MIT"
  # s.license      = { :type => "MIT", :file => "FILE_LICENSE" }
  s.author             = { "author" => "author@domain.cn" }
  s.platform     = :ios, "7.0"
  s.source       = { :git => "https://github.com/author/RNReactNativeHumanApi.git", :tag => "master" }
  s.source_files  = "HumanAPI/**/*.{h,m}", "RNReactNativeHumanApi.h", "RNReactNativeHumanApi.m"
  s.requires_arc = true


  s.dependency "React"
  #s.dependency "others"

end

  