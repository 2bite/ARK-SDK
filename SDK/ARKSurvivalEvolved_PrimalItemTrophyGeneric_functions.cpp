// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGeneric_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophyGeneric.PrimalItemTrophyGeneric_C.ExecuteUbergraph_PrimalItemTrophyGeneric
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophyGeneric_C::ExecuteUbergraph_PrimalItemTrophyGeneric(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophyGeneric.PrimalItemTrophyGeneric_C.ExecuteUbergraph_PrimalItemTrophyGeneric");

	UPrimalItemTrophyGeneric_C_ExecuteUbergraph_PrimalItemTrophyGeneric_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
