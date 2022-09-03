#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapSlingshot_Nutcracker_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C
// 0x0000 (0x0EB0 - 0x0EB0)
class AWeapSlingshot_Nutcracker_C : public AWeapSlingshot_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapSlingshot_Nutcracker.WeapSlingshot_Nutcracker_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapSlingshot_Nutcracker(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
