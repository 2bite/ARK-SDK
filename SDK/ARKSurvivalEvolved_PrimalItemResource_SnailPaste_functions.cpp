// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_SnailPaste_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_SnailPaste.PrimalItemResource_SnailPaste_C.ExecuteUbergraph_PrimalItemResource_SnailPaste
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_SnailPaste_C::ExecuteUbergraph_PrimalItemResource_SnailPaste(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_SnailPaste.PrimalItemResource_SnailPaste_C.ExecuteUbergraph_PrimalItemResource_SnailPaste");

	UPrimalItemResource_SnailPaste_C_ExecuteUbergraph_PrimalItemResource_SnailPaste_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
