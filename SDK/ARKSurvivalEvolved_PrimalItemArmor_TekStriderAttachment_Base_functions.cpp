// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemArmor_TekStriderAttachment_Base_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemArmor_TekStriderAttachment_Base.PrimalItemArmor_TekStriderAttachment_Base_C.ExecuteUbergraph_PrimalItemArmor_TekStriderAttachment_Base
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemArmor_TekStriderAttachment_Base_C::ExecuteUbergraph_PrimalItemArmor_TekStriderAttachment_Base(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemArmor_TekStriderAttachment_Base.PrimalItemArmor_TekStriderAttachment_Base_C.ExecuteUbergraph_PrimalItemArmor_TekStriderAttachment_Base");

	UPrimalItemArmor_TekStriderAttachment_Base_C_ExecuteUbergraph_PrimalItemArmor_TekStriderAttachment_Base_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
