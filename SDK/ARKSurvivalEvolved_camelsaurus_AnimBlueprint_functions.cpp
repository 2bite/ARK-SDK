// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_camelsaurus_AnimBlueprint_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C.ExecuteUbergraph_camelsaurus_AnimBlueprint
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void Ucamelsaurus_AnimBlueprint_C::ExecuteUbergraph_camelsaurus_AnimBlueprint(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function camelsaurus_AnimBlueprint.camelsaurus_AnimBlueprint_C.ExecuteUbergraph_camelsaurus_AnimBlueprint");

	Ucamelsaurus_AnimBlueprint_C_ExecuteUbergraph_camelsaurus_AnimBlueprint_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
