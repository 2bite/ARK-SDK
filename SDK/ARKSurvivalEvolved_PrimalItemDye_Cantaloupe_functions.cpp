// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemDye_Cantaloupe_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemDye_Cantaloupe.PrimalItemDye_Cantaloupe_C.ExecuteUbergraph_PrimalItemDye_Cantaloupe
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemDye_Cantaloupe_C::ExecuteUbergraph_PrimalItemDye_Cantaloupe(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemDye_Cantaloupe.PrimalItemDye_Cantaloupe_C.ExecuteUbergraph_PrimalItemDye_Cantaloupe");

	UPrimalItemDye_Cantaloupe_C_ExecuteUbergraph_PrimalItemDye_Cantaloupe_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
