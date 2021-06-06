#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_RestingDino_LionfishLion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C
// 0x0014 (0x0980 - 0x096C)
class ABuff_RestingDino_LionfishLion_C : public ABuff_RestingDino_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x096C(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    awoken_by_other_buff;                                     // 0x0970(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_RestingDino_LionfishLion.Buff_RestingDino_LionfishLion_C");
		return ptr;
	}


	void BPNotifyOtherBuffActivated(class APrimalBuff** OtherBuff);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_RestingDino_LionfishLion(int EntryPoint);
	void awoken_by_other_buff__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
