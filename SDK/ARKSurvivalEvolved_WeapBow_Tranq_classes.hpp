#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapBow_Tranq_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapBow_Tranq.WeapBow_Tranq_C
// 0x0000 (0x0EB8 - 0x0EB8)
class AWeapBow_Tranq_C : public AWeapBow_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapBow_Tranq.WeapBow_Tranq_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapBow_Tranq(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
