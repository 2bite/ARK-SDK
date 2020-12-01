// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_LeedsWhiteWhale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_LeedsWhiteWhale.DinoColorSet_LeedsWhiteWhale_C.ExecuteUbergraph_DinoColorSet_LeedsWhiteWhale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_LeedsWhiteWhale_C::ExecuteUbergraph_DinoColorSet_LeedsWhiteWhale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_LeedsWhiteWhale.DinoColorSet_LeedsWhiteWhale_C.ExecuteUbergraph_DinoColorSet_LeedsWhiteWhale");

	UDinoColorSet_LeedsWhiteWhale_C_ExecuteUbergraph_DinoColorSet_LeedsWhiteWhale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
