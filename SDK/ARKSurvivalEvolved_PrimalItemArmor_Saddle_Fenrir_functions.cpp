// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_Saddle_Fenrir_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_Saddle_Fenrir.PrimalItemArmor_Saddle_Fenrir_C.ExecuteUbergraph_PrimalItemArmor_Saddle_Fenrir
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_Saddle_Fenrir_C::ExecuteUbergraph_PrimalItemArmor_Saddle_Fenrir(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_Saddle_Fenrir.PrimalItemArmor_Saddle_Fenrir_C.ExecuteUbergraph_PrimalItemArmor_Saddle_Fenrir");

	UPrimalItemArmor_Saddle_Fenrir_C_ExecuteUbergraph_PrimalItemArmor_Saddle_Fenrir_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
