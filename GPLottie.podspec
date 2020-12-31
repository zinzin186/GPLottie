#
# Be sure to run `pod lib lint GPLottie.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'GPLottie'
  s.version          = '0.1.0'
  s.summary          = 'Animation image by Lottie'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/zinzin186/GPLottie'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'Vu Dinh Din' => 'vudinhdin@gapo.com.vn' }
  s.source           = { :git => 'https://github.com/zinzin186/GPLottie.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'

  s.source_files = 'GPLottie/Classes/**/*'
  
  # s.resource_bundles = {
  #   'GPLottie' => ['GPLottie/Assets/*.png']
  # }

  s.public_header_files = 'GPLottie/Classes/PublicHeaders/*.h'
  s.ios.frameworks = 'UIKit'
  s.osx.frameworks = ['AppKit', 'CoreVideo']
  s.module_name = 'GPLottie'
  s.header_dir = 'Lottie'
  
end
