// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_Client_BogSpiderSuckRiderBlood_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_Client_BogSpiderSuckRiderBlood.Buff_Client_BogSpiderSuckRiderBlood_C.UserConstructionScript
// ()

void ABuff_Client_BogSpiderSuckRiderBlood_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderSuckRiderBlood.Buff_Client_BogSpiderSuckRiderBlood_C.UserConstructionScript");

	ABuff_Client_BogSpiderSuckRiderBlood_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_Client_BogSpiderSuckRiderBlood.Buff_Client_BogSpiderSuckRiderBlood_C.ExecuteUbergraph_Buff_Client_BogSpiderSuckRiderBlood
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_Client_BogSpiderSuckRiderBlood_C::ExecuteUbergraph_Buff_Client_BogSpiderSuckRiderBlood(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_Client_BogSpiderSuckRiderBlood.Buff_Client_BogSpiderSuckRiderBlood_C.ExecuteUbergraph_Buff_Client_BogSpiderSuckRiderBlood");

	ABuff_Client_BogSpiderSuckRiderBlood_C_ExecuteUbergraph_Buff_Client_BogSpiderSuckRiderBlood_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
