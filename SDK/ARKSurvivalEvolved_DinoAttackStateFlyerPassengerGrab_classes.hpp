#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateFlyerPassengerGrab_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C
// 0x000F (0x0067 - 0x0058)
class UDinoAttackStateFlyerPassengerGrab_C : public UPrimalAIState
{
public:
	int                                                PassengerSlot;                                            // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              TimeInState;                                              // 0x005C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              GrabDelay;                                                // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               HitGrabStateAnimEvent;                                    // 0x0064(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               IsChildState;                                             // 0x0065(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsePassengerSystem;                                       // 0x0066(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoAttackStateFlyerPassengerGrab.DinoAttackStateFlyerPassengerGrab_C");
		return ptr;
	}


	void Grab_Character(class APrimalCharacter* Character, bool* Return_Value);
	bool Can_Grab_Character(class APrimalCharacter* ACharacter, int PassengerSeatIndex);
	void Reset_State();
	void OnEndEvent();
	void OnTickEvent(float* DeltaSeconds);
	void StartAnimationStateEvent(struct FName* CustomEventName, TEnumAsByte<ENetRole>* Role);
	void GetAttackSocketLocations(TArray<struct UObject_FTransform>* Locations);
	void STATIC_Find_Best_Grab_Target(class APrimalCharacter** bestTarget);
	void Get_Best_Passenger_Candidate(const struct FVector& SocketWorldPos, TArray<class AActor*>* Chars, class AActor** BestChar);
	void OnBeginEvent(class UPrimalAIState** InParentState);
	void ExecuteUbergraph_DinoAttackStateFlyerPassengerGrab(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
