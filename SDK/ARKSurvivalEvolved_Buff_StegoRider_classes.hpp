#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_StegoRider_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_StegoRider.Buff_StegoRider_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_StegoRider_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_StegoRider.Buff_StegoRider_C");
		return ptr;
	}


	bool BPPreventAddingOtherBuff(class UClass** anotherBuffClass);
	void BPNotifyPreventDismounting(class APrimalDinoCharacter** FromDino);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_StegoRider(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
