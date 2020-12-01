// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_Saddle_Megalosaurus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_Saddle_Megalosaurus.EngramEntry_Saddle_Megalosaurus_C.ExecuteUbergraph_EngramEntry_Saddle_Megalosaurus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_Saddle_Megalosaurus_C::ExecuteUbergraph_EngramEntry_Saddle_Megalosaurus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_Saddle_Megalosaurus.EngramEntry_Saddle_Megalosaurus_C.ExecuteUbergraph_EngramEntry_Saddle_Megalosaurus");

	UEngramEntry_Saddle_Megalosaurus_C_ExecuteUbergraph_EngramEntry_Saddle_Megalosaurus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
