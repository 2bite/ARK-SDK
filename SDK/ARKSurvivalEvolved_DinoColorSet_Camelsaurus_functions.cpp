// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Camelsaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Camelsaurus.DinoColorSet_Camelsaurus_C.ExecuteUbergraph_DinoColorSet_Camelsaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Camelsaurus_C::ExecuteUbergraph_DinoColorSet_Camelsaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Camelsaurus.DinoColorSet_Camelsaurus_C.ExecuteUbergraph_DinoColorSet_Camelsaurus");

	UDinoColorSet_Camelsaurus_C_ExecuteUbergraph_DinoColorSet_Camelsaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
