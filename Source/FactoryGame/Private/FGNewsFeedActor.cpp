// This file has been automatically generated by the Unreal Header Implementation tool

#include "FGNewsFeedActor.h"

AFGNewsFeedActor::AFGNewsFeedActor() : Super() {
	this->mNewsFeedRequestFailedText = INVTEXT("Unable to fetch News Feed.");
	this->mNewsFeedURLs.SetNum(3); this->mNewsFeedURLs[0].GameVersion = EGameVersion::GV_Main; this->mNewsFeedURLs[0].URL = "http://ingamenews.satisfactorygame.com/main.news"; this->mNewsFeedURLs[1].GameVersion = EGameVersion::GV_Experimental; this->mNewsFeedURLs[1].URL = "http://ingamenews.satisfactorygame.com/experimental.news"; this->mNewsFeedURLs[2].GameVersion = EGameVersion::GV_Other; this->mNewsFeedURLs[2].URL = "http://ingamenews.satisfactorygame.com/other.news";
}
void AFGNewsFeedActor::BeginPlay(){ }
FString AFGNewsFeedActor::GetNewsFeedURL(){ return FString(); }
void AFGNewsFeedActor::OnResponseReceived(FHttpRequestPtr request, FHttpResponsePtr response, bool wasSuccessful){ }