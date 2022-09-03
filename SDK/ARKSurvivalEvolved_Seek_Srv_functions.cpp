// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Seek_Srv_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Seek_Srv.Seek_Srv_C.ReceiveActivation
// ()
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void USeek_Srv_C::ReceiveActivation(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seek_Srv.Seek_Srv_C.ReceiveActivation");

	USeek_Srv_C_ReceiveActivation_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Seek_Srv.Seek_Srv_C.ExecuteUbergraph_Seek_Srv
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void USeek_Srv_C::ExecuteUbergraph_Seek_Srv(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Seek_Srv.Seek_Srv_C.ExecuteUbergraph_Seek_Srv");

	USeek_Srv_C_ExecuteUbergraph_Seek_Srv_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
