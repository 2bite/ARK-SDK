// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_TreeSapTap_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_TreeSapTap.EngramEntry_TreeSapTap_C.ExecuteUbergraph_EngramEntry_TreeSapTap
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_TreeSapTap_C::ExecuteUbergraph_EngramEntry_TreeSapTap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_TreeSapTap.EngramEntry_TreeSapTap_C.ExecuteUbergraph_EngramEntry_TreeSapTap");

	UEngramEntry_TreeSapTap_C_ExecuteUbergraph_EngramEntry_TreeSapTap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
