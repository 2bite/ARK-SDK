// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_DinoPackLeader_Lionfish_Lion_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C.UserConstructionScript
// ()

void ABuff_DinoPackLeader_Lionfish_Lion_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C.UserConstructionScript");

	ABuff_DinoPackLeader_Lionfish_Lion_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackLeader_Lionfish_Lion
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_DinoPackLeader_Lionfish_Lion_C::ExecuteUbergraph_Buff_DinoPackLeader_Lionfish_Lion(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_DinoPackLeader_Lionfish_Lion.Buff_DinoPackLeader_Lionfish_Lion_C.ExecuteUbergraph_Buff_DinoPackLeader_Lionfish_Lion");

	ABuff_DinoPackLeader_Lionfish_Lion_C_ExecuteUbergraph_Buff_DinoPackLeader_Lionfish_Lion_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
