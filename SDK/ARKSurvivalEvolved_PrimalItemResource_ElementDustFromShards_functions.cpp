// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemResource_ElementDustFromShards_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemResource_ElementDustFromShards.PrimalItemResource_ElementDustFromShards_C.ExecuteUbergraph_PrimalItemResource_ElementDustFromShards
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemResource_ElementDustFromShards_C::ExecuteUbergraph_PrimalItemResource_ElementDustFromShards(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemResource_ElementDustFromShards.PrimalItemResource_ElementDustFromShards_C.ExecuteUbergraph_PrimalItemResource_ElementDustFromShards");

	UPrimalItemResource_ElementDustFromShards_C_ExecuteUbergraph_PrimalItemResource_ElementDustFromShards_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
