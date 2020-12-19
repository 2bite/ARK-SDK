// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_DesertKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_DesertKaiju.PrimalItemArmor_DesertKaiju_C.ExecuteUbergraph_PrimalItemArmor_DesertKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_DesertKaiju_C::ExecuteUbergraph_PrimalItemArmor_DesertKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_DesertKaiju.PrimalItemArmor_DesertKaiju_C.ExecuteUbergraph_PrimalItemArmor_DesertKaiju");

	UPrimalItemArmor_DesertKaiju_C_ExecuteUbergraph_PrimalItemArmor_DesertKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
