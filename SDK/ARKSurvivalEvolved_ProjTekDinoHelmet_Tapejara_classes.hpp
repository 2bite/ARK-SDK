#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekDinoHelmet_Tapejara_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C
// 0x0000 (0x0772 - 0x0772)
class AProjTekDinoHelmet_Tapejara_C : public AProjTekDinoHelmet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjTekDinoHelmet_Tapejara(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
