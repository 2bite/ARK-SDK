// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_Sparkpowder_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C.ExecuteUbergraph_PrimalItemResource_Sparkpowder
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_Sparkpowder_C::ExecuteUbergraph_PrimalItemResource_Sparkpowder(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_Sparkpowder.PrimalItemResource_Sparkpowder_C.ExecuteUbergraph_PrimalItemResource_Sparkpowder");

	UPrimalItemResource_Sparkpowder_C_ExecuteUbergraph_PrimalItemResource_Sparkpowder_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
