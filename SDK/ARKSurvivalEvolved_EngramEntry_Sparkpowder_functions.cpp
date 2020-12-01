// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Sparkpowder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Sparkpowder.EngramEntry_Sparkpowder_C.ExecuteUbergraph_EngramEntry_Sparkpowder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Sparkpowder_C::ExecuteUbergraph_EngramEntry_Sparkpowder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Sparkpowder.EngramEntry_Sparkpowder_C.ExecuteUbergraph_EngramEntry_Sparkpowder");

	UEngramEntry_Sparkpowder_C_ExecuteUbergraph_EngramEntry_Sparkpowder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
