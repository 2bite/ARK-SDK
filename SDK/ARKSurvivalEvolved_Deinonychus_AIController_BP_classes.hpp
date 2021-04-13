#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Deinonychus_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Deinonychus_AIController_BP.Deinonychus_AIController_BP_C
// 0x003F (0x0958 - 0x0919)
class ADeinonychus_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0919(0x0003) MISSED OFFSET
	float                                              MinDistToTargetToConsiderUberpounce;                      // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DistanceToTargetToEndRaptorPounce;                        // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0924(0x0004) MISSED OFFSET
	double                                             TimeBeginPlay;                                            // 0x0928(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumAttachedMeleeAttacks;                                  // 0x0930(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x4];                                       // 0x0934(0x0004) MISSED OFFSET
	double                                             TimeSinceLastUberpounceCharacter;                         // 0x0938(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               AllowGroundSurfaceUberpouncesInAllContexts;               // 0x0940(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x7];                                       // 0x0941(0x0007) MISSED OFFSET
	double                                             TimeSinceLastUberpounceLocation;                          // 0x0948(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceLocationRange;                                  // 0x0950(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              UberpounceCharacterRange;                                 // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Deinonychus_AIController_BP.Deinonychus_AIController_BP_C");
		return ptr;
	}


	void STATIC_DinoUberpounce(bool* Success);
	void LocationUberpounce();
	void AllowSurfaceNormalForUberpounce(const struct FVector& surfaceNormal, bool* IsValid);
	void Enable();
	void Start_Uberpounce(const struct FUberpounceData& Data);
	void Deinonychus_AttackedWhileLatched();
	void OnUberpounceStateChanged(TEnumAsByte<EUberpounceState> NewState, TEnumAsByte<EUberpounceState> PrevState);
	void UpdateUberpounce();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void GetPrimalTarget(class APrimalCharacter** Target);
	void GetDino(class ADeinonychus_Character_BP_C** Ret);
	void UserConstructionScript();
	void ExecuteUbergraph_Deinonychus_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
