// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_CaveWolf_FindAttachPointForZipline_TK_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ReceiveExecute
// (Native, NetResponse, Static, NetMulticast, MulticastDelegate, Public, HasOutParms, DLLImport, Const, NetValidate)
// Parameters:
// class AActor**                 OwnerActor                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_FindAttachPointForZipline_TK_C::STATIC_ReceiveExecute(class AActor** OwnerActor)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ReceiveExecute");

	UCaveWolf_FindAttachPointForZipline_TK_C_ReceiveExecute_Params params;
	params.OwnerActor = OwnerActor;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x400;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UCaveWolf_FindAttachPointForZipline_TK_C::ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CaveWolf_FindAttachPointForZipline_TK.CaveWolf_FindAttachPointForZipline_TK_C.ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK");

	UCaveWolf_FindAttachPointForZipline_TK_C_ExecuteUbergraph_CaveWolf_FindAttachPointForZipline_TK_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
