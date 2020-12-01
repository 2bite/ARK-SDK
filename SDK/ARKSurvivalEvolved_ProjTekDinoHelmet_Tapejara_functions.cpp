// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjTekDinoHelmet_Tapejara_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.UserConstructionScript
// ()

void AProjTekDinoHelmet_Tapejara_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.UserConstructionScript");

	AProjTekDinoHelmet_Tapejara_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.ExecuteUbergraph_ProjTekDinoHelmet_Tapejara
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void AProjTekDinoHelmet_Tapejara_C::ExecuteUbergraph_ProjTekDinoHelmet_Tapejara(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ProjTekDinoHelmet_Tapejara.ProjTekDinoHelmet_Tapejara_C.ExecuteUbergraph_ProjTekDinoHelmet_Tapejara");

	AProjTekDinoHelmet_Tapejara_C_ExecuteUbergraph_ProjTekDinoHelmet_Tapejara_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
