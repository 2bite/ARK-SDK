// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemConsumable_Egg_Carno_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemConsumable_Egg_Carno.PrimalItemConsumable_Egg_Carno_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Carno
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemConsumable_Egg_Carno_C::ExecuteUbergraph_PrimalItemConsumable_Egg_Carno(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemConsumable_Egg_Carno.PrimalItemConsumable_Egg_Carno_C.ExecuteUbergraph_PrimalItemConsumable_Egg_Carno");

	UPrimalItemConsumable_Egg_Carno_C_ExecuteUbergraph_PrimalItemConsumable_Egg_Carno_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
