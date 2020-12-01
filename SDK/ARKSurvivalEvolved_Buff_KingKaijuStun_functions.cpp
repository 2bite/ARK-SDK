// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KingKaijuStun_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.BPActivated
// ()
// Parameters:
// class AActor**                 ForInstigator                  (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuStun_C::BPActivated(class AActor** ForInstigator)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.BPActivated");

	ABuff_KingKaijuStun_C_BPActivated_Params params;
	params.ForInstigator = ForInstigator;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.UserConstructionScript
// ()

void ABuff_KingKaijuStun_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.UserConstructionScript");

	ABuff_KingKaijuStun_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.ExecuteUbergraph_Buff_KingKaijuStun
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ABuff_KingKaijuStun_C::ExecuteUbergraph_Buff_KingKaijuStun(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Buff_KingKaijuStun.Buff_KingKaijuStun_C.ExecuteUbergraph_Buff_KingKaijuStun");

	ABuff_KingKaijuStun_C_ExecuteUbergraph_Buff_KingKaijuStun_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
