// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TekUnderwaterBase_BottomEntry_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TekUnderwaterBase_BottomEntry_C::ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TekUnderwaterBase_BottomEntry.EngramEntry_TekUnderwaterBase_BottomEntry_C.ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry");

	UEngramEntry_TekUnderwaterBase_BottomEntry_C_ExecuteUbergraph_EngramEntry_TekUnderwaterBase_BottomEntry_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
