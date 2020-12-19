// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ChitinPaste_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ChitinPaste.PrimalItemResource_ChitinPaste_C.ExecuteUbergraph_PrimalItemResource_ChitinPaste
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ChitinPaste_C::ExecuteUbergraph_PrimalItemResource_ChitinPaste(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ChitinPaste.PrimalItemResource_ChitinPaste_C.ExecuteUbergraph_PrimalItemResource_ChitinPaste");

	UPrimalItemResource_ChitinPaste_C_ExecuteUbergraph_PrimalItemResource_ChitinPaste_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
