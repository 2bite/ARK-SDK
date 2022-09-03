#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapPike_Pitchfork_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapPike_Pitchfork.WeapPike_Pitchfork_C
// 0x0000 (0x0D88 - 0x0D88)
class AWeapPike_Pitchfork_C : public AWeapPike_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapPike_Pitchfork.WeapPike_Pitchfork_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapPike_Pitchfork(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
