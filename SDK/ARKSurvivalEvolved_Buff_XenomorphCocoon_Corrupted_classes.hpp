#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_XenomorphCocoon_Corrupted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_XenomorphCocoon_Corrupted.Buff_XenomorphCocoon_Corrupted_C
// 0x0000 (0x098A - 0x098A)
class ABuff_XenomorphCocoon_Corrupted_C : public ABuff_XenomorphCocoon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_XenomorphCocoon_Corrupted.Buff_XenomorphCocoon_Corrupted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_XenomorphCocoon_Corrupted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
