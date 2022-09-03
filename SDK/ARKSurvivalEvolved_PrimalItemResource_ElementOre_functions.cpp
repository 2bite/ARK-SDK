// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementOre_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementOre.PrimalItemResource_ElementOre_C.ExecuteUbergraph_PrimalItemResource_ElementOre
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementOre_C::ExecuteUbergraph_PrimalItemResource_ElementOre(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementOre.PrimalItemResource_ElementOre_C.ExecuteUbergraph_PrimalItemResource_ElementOre");

	UPrimalItemResource_ElementOre_C_ExecuteUbergraph_PrimalItemResource_ElementOre_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
