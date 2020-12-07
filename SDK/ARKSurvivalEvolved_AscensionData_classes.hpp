#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AscensionData_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AscensionData.AscensionData_C
// 0x0028 (0x0490 - 0x0468)
class AAscensionData_C : public AActor
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsFemale;                                                 // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0471(0x0003) MISSED OFFSET
	int                                                NumAscensions;                                            // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                NumAscensionsExt;                                         // 0x0478(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FLinearColor                                PMeshColor;                                               // 0x047C(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                BossLevel;                                                // 0x048C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AscensionData.AscensionData_C");
		return ptr;
	}


	void GetData(bool* NewParam, bool* NewParam1, bool* NewParam2);
	void SaveData(int BossLevel);
	void UserConstructionScript();
	void ExecuteUbergraph_AscensionData(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
