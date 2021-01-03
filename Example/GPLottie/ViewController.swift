//
//  ViewController.swift
//  GPLottie
//
//  Created by Vu Dinh Din on 12/30/2020.
//  Copyright (c) 2020 Vu Dinh Din. All rights reserved.
//

import UIKit
import GPLottie
import SDWebImageLottieCoder

class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()
        let lottieURL: URL = URL(string: "https://files-5.gapo.vn/sticker/origin/44e1ad2b-3887-47c3-b32d-1e6298d269a9.json")!
        let imgView = SDAnimatedImageView(frame: CGRect(x: 220, y: 220, width: 100, height: 100))
        imgView.clipsToBounds = true
        let pixelSize = CGSize(width: 300, height: 300)
//        imgView.sd_setImage(with: lottieURL, placeholderImage: nil, options: .continueInBackground, context: [SDWebImageContextOption.imageThumbnailPixelSize : pixelSize])
        imgView.sd_setImage(with: lottieURL, placeholderImage: nil, options: [], context: nil)
        imgView.backgroundColor = .red
        self.view.addSubview(imgView)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }

}

