#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapFists_Female_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapFists_Female.WeapFists_Female_C
// 0x0000 (0x0D50 - 0x0D50)
class AWeapFists_Female_C : public AWeapFists_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapFists_Female.WeapFists_Female_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapFists_Female(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
