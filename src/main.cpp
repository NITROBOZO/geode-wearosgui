#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/CreatorLayer.hpp>
#include <Geode/modify/LevelSelectLayer.hpp>
#include <Geode/modify/GauntletSelectLayer.hpp>
#include <Geode/modify/LevelSearchLayer.hpp>
#include <Geode/modify/LevelBrowserLayer.hpp>
#include <Geode/modify/LevelLeaderboard.hpp>
#include <Geode/modify/PlayLayer.hpp>
#include <Geode/modify/LevelInfoLayer.hpp>
#include <Geode/modify/LeaderboardsLayer.hpp>

using namespace geode::prelude;

// Main Menu (quit button) - Use close button sprite
class $modify(MyMenuLayer, MenuLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init() {
        if (!MenuLayer::init()) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        // Use the close button sprite
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_closeBtn_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyMenuLayer::onWearOSBack)
        );
        
        // Position at top center, moved down a bit more
        button->setPosition(ccp(0, winSize.height / 2 - 100));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Creator Menu - Use tools/wrench sprite
class $modify(MyCreatorLayer, CreatorLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init() {
        if (!CreatorLayer::init()) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_01_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyCreatorLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Level Select / Play Menu - Use back arrow
class $modify(MyLevelSelectLayer, LevelSelectLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(int level) {
        if (!LevelSelectLayer::init(level)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLevelSelectLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Gauntlet Select - Use gauntlet/trophy sprite
class $modify(MyGauntletSelectLayer, GauntletSelectLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(int type) {
        if (!GauntletSelectLayer::init(type)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyGauntletSelectLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Level Search Layer - Use search/magnifying glass sprite
class $modify(MyLevelSearchLayer, LevelSearchLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(int type) {
        if (!LevelSearchLayer::init(type)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLevelSearchLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Level Browser - Use back arrow
class $modify(MyLevelBrowserLayer, LevelBrowserLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(GJSearchObject* searchObj) {
        if (!LevelBrowserLayer::init(searchObj)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLevelBrowserLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Scores/Leaderboard Menu - Use back arrow
class $modify(MyLevelLeaderboard, LevelLeaderboard) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(GJGameLevel* level, LevelLeaderboardType type, LevelLeaderboardMode mode) {
        if (!LevelLeaderboard::init(level, type, mode)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLevelLeaderboard::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// PlayLayer - Add transparent pause button centered horizontally
class $modify(MyPlayLayer, PlayLayer) {
    void onWearOSPause(CCObject*) {
        this->pauseGame(true);
    }
    
    bool init(GJGameLevel* level, bool useReplay, bool dontCreateObjects) {
        if (!PlayLayer::init(level, useReplay, dontCreateObjects)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        // Create transparent pause button
        auto pauseSprite = CCSprite::createWithSpriteFrameName("GJ_pauseEditorBtn_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            pauseSprite,
            this,
            menu_selector(MyPlayLayer::onWearOSPause)
        );
        
        // Position centered horizontally at top
        button->setPosition(ccp(0, winSize.height / 2 - 80));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Level Info Layer (level details screen)
class $modify(MyLevelInfoLayer, LevelInfoLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(GJGameLevel* level, bool challenge) {
        if (!LevelInfoLayer::init(level, challenge)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLevelInfoLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};

// Leaderboards/Scores Layer (Scores tab from main menu)
class $modify(MyLeaderboardsLayer, LeaderboardsLayer) {
    void onWearOSBack(CCObject*) {
        this->keyBackClicked();
    }
    
    bool init(LeaderboardState state) {
        if (!LeaderboardsLayer::init(state)) return false;
        
        auto winSize = CCDirector::sharedDirector()->getWinSize();
        
        auto buttonSprite = CCSprite::createWithSpriteFrameName("GJ_arrow_03_001.png");
        auto button = CCMenuItemSpriteExtra::create(
            buttonSprite,
            this,
            menu_selector(MyLeaderboardsLayer::onWearOSBack)
        );
        
        // Position at top center
        button->setPosition(ccp(0, winSize.height / 2 - 60));
        
        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(ccp(winSize.width / 2, winSize.height / 2));
        
        this->addChild(menu, 100);
        return true;
    }
};