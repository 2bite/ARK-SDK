#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_BlurEffect_RareMushroom_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C
// 0x0004 (0x0964 - 0x0960)
class ABuff_BlurEffect_RareMushroom_C : public ABuff_Base_C
{
public:
	float                                              MaxBuffTime;                                              // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_BlurEffect_RareMushroom.Buff_BlurEffect_RareMushroom_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_BlurEffect_RareMushroom(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
