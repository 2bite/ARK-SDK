#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Diplocaulus_Anim_Blueprint_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C
// 0x0000 (0x16BC - 0x16BC)
class UDiplocaulus_Anim_Blueprint_C : public UDinoBlueprintBase_RootBoneName_Swimmer_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass Diplocaulus_Anim_Blueprint.Diplocaulus_Anim_Blueprint_C");
		return ptr;
	}


	void ExecuteUbergraph_Diplocaulus_Anim_Blueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
