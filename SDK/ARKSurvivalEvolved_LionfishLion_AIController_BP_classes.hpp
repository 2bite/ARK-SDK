#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_LionfishLion_AIController_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LionfishLion_AIController_BP.LionfishLion_AIController_BP_C
// 0x0027 (0x0940 - 0x0919)
class ALionfishLion_AIController_BP_C : public ADino_AIController_BP_C
{
public:
	bool                                               is_cloaked;                                               // 0x0919(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x091A(0x0002) MISSED OFFSET
	float                                              daytime_start_hour;                                       // 0x091C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nighttime_start_hour;                                     // 0x0920(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              nighttime_stalking_targeting_range;                       // 0x0924(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               Delete;                                                   // 0x0928(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0929(0x0007) MISSED OFFSET
	TArray<class AActor*>                              CallFunc_LineTraceMulti_NEW_ActorsToIgnore_RefProperty;   // 0x0930(0x0010) (OutParm, ZeroConstructor, Transient, DuplicateTransient, ReferenceParm)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LionfishLion_AIController_BP.LionfishLion_AIController_BP_C");
		return ptr;
	}


	bool BPShouldNotifyNeighbor(class APrimalDinoCharacter** neighbor);
	void BPSetupFindTarget();
	void (float _1, float _2, float* Output);
	bool is_night();
	void is_line_of_sight_blocked(bool* NewParam);
	void Check_If_Viewed_By_Players();
	void STATIC_BPNotifyTargetSet();
	void UserConstructionScript();
	void ExecuteUbergraph_LionfishLion_AIController_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
