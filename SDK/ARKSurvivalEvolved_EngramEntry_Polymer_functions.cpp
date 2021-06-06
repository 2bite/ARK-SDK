// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Polymer_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Polymer.EngramEntry_Polymer_C.ExecuteUbergraph_EngramEntry_Polymer
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Polymer_C::ExecuteUbergraph_EngramEntry_Polymer(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Polymer.EngramEntry_Polymer_C.ExecuteUbergraph_EngramEntry_Polymer");

	UEngramEntry_Polymer_C_ExecuteUbergraph_EngramEntry_Polymer_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
