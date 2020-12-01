// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Pegomastax_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Pegomastax.DinoEntry_Pegomastax_C.ExecuteUbergraph_DinoEntry_Pegomastax
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Pegomastax_C::ExecuteUbergraph_DinoEntry_Pegomastax(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Pegomastax.DinoEntry_Pegomastax_C.ExecuteUbergraph_DinoEntry_Pegomastax");

	UDinoEntry_Pegomastax_C_ExecuteUbergraph_DinoEntry_Pegomastax_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
