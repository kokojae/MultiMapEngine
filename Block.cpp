#include "DXUT.h"
#include "Block.h"
#include "MultiMapEngine.h"

Block::Block()
{
}

Block::~Block()
{
}

void Block::Init()
{
	SetTexture(L"Source/block.png", { 100,100 });
	SetCollider({ 100,100 }, Layer::BLOCK);
	info.color = D3DCOLOR_ARGB(180, 255, 30, 0);	
}

void Block::Update()
{
}
