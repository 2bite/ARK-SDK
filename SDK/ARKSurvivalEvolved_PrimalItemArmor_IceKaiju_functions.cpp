// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_IceKaiju_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_IceKaiju.PrimalItemArmor_IceKaiju_C.ExecuteUbergraph_PrimalItemArmor_IceKaiju
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_IceKaiju_C::ExecuteUbergraph_PrimalItemArmor_IceKaiju(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_IceKaiju.PrimalItemArmor_IceKaiju_C.ExecuteUbergraph_PrimalItemArmor_IceKaiju");

	UPrimalItemArmor_IceKaiju_C_ExecuteUbergraph_PrimalItemArmor_IceKaiju_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
