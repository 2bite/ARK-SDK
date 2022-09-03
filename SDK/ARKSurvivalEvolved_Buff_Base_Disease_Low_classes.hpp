#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Base_Disease_Low_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_Base_Disease_Low.Buff_Base_Disease_Low_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_Base_Disease_Low_C : public ABuff_Base_Disease_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_Base_Disease_Low.Buff_Base_Disease_Low_C");
		return ptr;
	}


	bool BPCustomAllowAddBuff(class APrimalCharacter** forCharacter, class AActor** DamageCauser);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_Base_Disease_Low(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
