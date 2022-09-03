#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCompoundBow_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C
// 0x0000 (0x0EB0 - 0x0EB0)
class AWeapCompoundBow_Tranq_C : public AWeapCompoundBow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCompoundBow_Tranq.WeapCompoundBow_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCompoundBow_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
