// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemTrophyGenericParent_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C.ExecuteUbergraph_PrimalItemTrophyGenericParent
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemTrophyGenericParent_C::ExecuteUbergraph_PrimalItemTrophyGenericParent(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemTrophyGenericParent.PrimalItemTrophyGenericParent_C.ExecuteUbergraph_PrimalItemTrophyGenericParent");

	UPrimalItemTrophyGenericParent_C_ExecuteUbergraph_PrimalItemTrophyGenericParent_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
